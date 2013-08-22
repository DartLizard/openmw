#ifndef CSM_FILTER_UNARIYNODE_H
#define CSM_FILTER_UNARIYNODE_H

#include <memory>

#include "node.hpp"

namespace CSMFilter
{
    class LeafNode : public Node
    {
        public:

            virtual std::vector<int> getReferencedColumns() const;
            ///< Return a list of the IDs of the columns referenced by this node. The column mapping
            /// passed into test as columns must contain all columns listed here.

            virtual bool isSimple() const;
            ///< \return Can this filter be displayed in simple mode.
    };
}

#endif
