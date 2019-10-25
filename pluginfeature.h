#ifndef PLUGINFEATURE_H
#define PLUGINFEATURE_H

#include <QObject>

namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {
            class PluginFeature
            {

            public:

                /*!
                 * \brief Makes a new plugin feature.
                 * \param Feature name.
                 * \param Set to true only if this feature is deprecated.
                 */
                PluginFeature(QString name, bool deprecated = false)
                    : pName(name), pDeprecated(deprecated)
                {

                }

                // ------------------------------------------
                // - Metadata
                // ------------------------------------------
                const QString   & getName() const;
                const bool        isDeprecated() const;

            private:

                // ------------------------------------------
                // - Metadata
                // ------------------------------------------
                const QString     pName;
                const bool        pDeprecated;

            };
        }
    }
}

#endif // PLUGINFEATURE_H
