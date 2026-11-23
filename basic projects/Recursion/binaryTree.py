
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val      # عدد داخل این گره
        self.left = left    # اشاره به گره فرزند چپ
        self.right = right  # اشاره به گره فرزند راست




def sum_tree(root):
    # ۱. شرط توقف: اگر گره وجود نداشت (None بود)
    if not root:
        return 0
        
    # ۲. محاسبه مجموع سمت چپ و راست و جمع با مقدار خود گره
    left_sum = sum_tree(root.left)
    right_sum = sum_tree(right)
    
    return root.val + left_sum + right_sum