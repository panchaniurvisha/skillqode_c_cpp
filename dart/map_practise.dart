void main() {
  Map company = {
    "order_id": "151",
    "name": "piyush patel1",
    "status": [
      {
        "order_status": "Order Placed",
        "status_id": "1",
        "seller_id": "4",
        "seller_total": "558.00",
        "total_shipping": "0.00",
        "seller_name": "D.N. AGENCIES",
        "store_id": "3",
        "store_country": "99",
        "store_state": "1486",
        "store_country_name": "India",
        "store_state_name": "Haryana",
        "store_gstin": "06AAKFD9709P2ZP ",
        "order_total": 558,
        "order_total_show": "₹558.00",
        "product": [
          {
            "product_id": "491",
            "price": "259.0000",
            "return": [],
            "price_with_tax": "₹259.00",
            "tax": "39.5085",
            "quantity": "1",
            "product_name":
                "Nivea Body  Lotion For very Dry Skin  , Cocoa  Nourish – Deep Moisture Serum -Cocoa Butter  and coconut oil ,For Men &amp; Women– 200ml",
            "store_name": "D.N. AGENCIES",
            "thumb":
                "https://www.vkreta.com/image/cache/catalog/Nivea/DSC_0340-90x90.webp",
            "href":
                "https://www.vkreta.com/index.php?route=product/product&amp;product_id=491",
            "hsn": "33049930",
            "tax_details": [
              {
                "tax_rate_id": "90",
                "tax_amount": 39.5084745762712,
                "name": "IGST 18%",
                "rate": "18.0000"
              }
            ],
            "status": "Cancelled",
            "is_traking": 1,
            "is_cancel": 0,
            "is_return": 0,
            "is_return_traking": 0,
            "is_product_review": 0,
            "is_seller_review": 0,
            "invoice": ""
          }
        ]
      }
    ],
    "date_added": "10/12/2022",
    "products": 2,
    "total": "₹578.00",
    "view":
        "https://www.vkreta.com/index.php?route=account/order/info&amp;order_id=151"
  };
  print(company["status"][0]["product"][0]["tax_details"][0]["tax_amount"]);
}
