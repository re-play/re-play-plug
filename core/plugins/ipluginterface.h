#ifndef IPLUGINTERFACE_H
#define IPLUGINTERFACE_H

#include <map>

#include <QObject>

#include <core/plugins/pluginfeature.h>

namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {

            class IPlugInterface
            {

            public:

                IPlugInterface(QString name)
                    : pName(name)
                {

                }

                // ------------------------------------
                // - Metadata
                // ------------------------------------
                const QString   & getName() const;

                // ------------------------------------
                // - Features and info
                // ------------------------------------
                const std::vector<PluginFeature*> getFeatures();
                const PluginFeature *getFeature(QString name);
                int feauresCount() const;

            private:

                const QString pName;

                // ------------------------------------
                // - Features
                // ------------------------------------
                std::map<QString, PluginFeature*> pFeatures;

            };

        }
    }
}

#endif // IPLUGINTERFACE_H
