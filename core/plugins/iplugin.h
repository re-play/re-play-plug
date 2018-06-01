#ifndef REPLAYPLUG_H
#define REPLAYPLUG_H

#include <map>

#include <QObject>

#include <core/plugins/ipluginterface.h>

namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {
            /*!
             * \brief A virtual class that works as interface for plugins.
             */
            class IPlugin
            {

            public:

                /*!
                 * \brief Makes a new plugin.
                 * \param Plugin name.
                 */
                IPlugin(QString name, QString version);

                // ------------------------------------
                // - Metadata
                // ------------------------------------
                const QString &getName() const;
                const QString &getVersion() const;

                // ------------------------------------
                // - Virtual interfaces (invoked in this order)
                // ------------------------------------
                virtual void initializeInterfaces() = 0;
                virtual void initialize(/*PluginLoader * plugins*/) = 0;

                // ------------------------------------
                // - Interfaces informations
                // ------------------------------------
                std::vector<IPlugInterface*> getInterfaces();
                IPlugInterface * getInterface(QString name);
                bool             hasInterface(QString name);

            protected:

                // ------------------------------------
                // - Interfaces management
                // ------------------------------------
                void addInterface(IPlugInterface *);

            private:

                // ------------------------------------
                // - Metadata
                // ------------------------------------
                QString pName;
                QString pVersion;

                // ------------------------------------
                // - Interfaces
                // ------------------------------------
                std::map<QString, IPlugInterface*> pInterfaces;

            };
        }
    }
}

#endif // REPLAYPLUG_H
