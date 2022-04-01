
#ifndef CONNECTEDCOMPONENT_H
#define CONNECTEDCOMPONENT_H
#include <vector>
namespace tswlun002{
     
     class ConnectedComponent
     {
     private:
         /* data */
         int numberPixels_component;
         int* component_identifier;
         //std::vector<std::pair<int, int>> setOfNumberComponent;
         std::vector<std::pair<int,int>> pixels_coordinates;
     public:
         /**
          * @brief Default construct
          */
         ConnectedComponent(/* args */);
         /**
          * @brief Construct a new Connected Component object
          */
         ConnectedComponent(const int numberPixels, const int identifier);
         /**
          * @brief copy Construct for Connected Component object
          */
         ConnectedComponent(const ConnectedComponent& other_ConnectedComponent);
         /**
          * @brief move Construct for Connected Component object
          */
         ConnectedComponent(ConnectedComponent&& other_ConnectedComponent);
         /**
          * @brief  copy assigment  for Connected component object
          */
         ConnectedComponent& operator=(const ConnectedComponent& other_ConnectedComponent);
         /**
          * @brief move assignment for Connected component object
          */
         ConnectedComponent& operator=(ConnectedComponent&& other_ConnectedComponent);
         /**
          * @brief Set the Pixel Cordinates object
          * @param y - co-ordinate
          * @param x - co-ordinate 
          */
        void  setPixelCordinates(const std::vector<std::pair<int,int>>coOrdinate_component);
        /**
         * @brief Set the Number Component object
         * 
         * @param numberComponents is the  identifier's component  and  number of pixels 
         
        void setNumberComponent(const std::pair<int, int> numberComponents);
        /**
         * @brief Get the Set Of Number Component object
         * 
         * @return std::vector<std::pair<int, int>> identifier's component  and  number of pixels 
         
         std::vector<std::pair<int, int>> &getSetOfNumberComponent();
         */
        /**
         * @brief Get the Pixel Cordinates object
         * @return std::vector<std::pair<int, int>>  pixel co-ordinates
         */
         std::vector<std::pair<int,int>> &getPixelCordinates();
         /**
          * @brief Set the Number Pixel Component object
          */
         void setNumberPixelComponent(const int value);
         /**
          * @brief Get the Number Pixel Component object
          */
         int getNumberPixelComponent()const;
         /**
          * @brief Set the Component Identifier object
          */
         void setComponentIdentifier(const int id);
         /**
          * @brief Get the Identifier object
          */
         int* getIdentifier()const;
         /**
          * @brief Destroy the Connected Component object
          */
         ~ConnectedComponent();
     };
}
#endif