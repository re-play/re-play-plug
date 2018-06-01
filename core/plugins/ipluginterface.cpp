#include "core/plugins/ipluginterface.h"



namespace RePlay
{
    namespace Core
    {
        namespace Plugins
        {

            /*!
             * \brief Gets the interface name.
             * \return A string with the interface name.
             */
            const QString &IPlugInterface::getName() const
            {
                return pName;
            }

            const std::vector<PluginFeature*> IPlugInterface::getFeatures()
            {
                std::vector<PluginFeature*> features;

                for (auto it = pFeatures.begin(); it != pFeatures.end(); it++)
                    features.push_back(it->second);

                return features;
            }

            const PluginFeature *IPlugInterface::getFeature(QString name)
            {
                return pFeatures[name];
            }

            int IPlugInterface::feauresCount() const
            {
                return (int)pFeatures.size();
            }

        }
    }
}
