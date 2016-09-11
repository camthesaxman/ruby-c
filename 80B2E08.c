int __fastcall SetShopItemsForSale(_WORD *a1)
{
  int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = 0;
  dword_300070C = (int)a1;
  byte_3000710 = 0;
  if ( *a1 )
  {
    do
    {
      ++byte_3000710;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( a1[v1] );
  }
  return v3;
}
