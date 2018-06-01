#include "core/plugins/pluginfeature.h"

namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {

            /*!
             * \brief Gets the feature name.
             * \return A string containing the feature name.
             */
            const QString &PluginFeature::getName() const
            {
                return pName;
            }

            /*!
             * \brief Gets if this feature is deprecated.
             * \return True if is deprecated, false otherwise.
             */
            const bool PluginFeature::isDeprecated() const
            {
                return pDeprecated;
            }



        }
    }
}
