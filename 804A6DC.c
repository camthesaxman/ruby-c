int __fastcall sub_804A6DC(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r7@1
  char *v3; // r5@2
  char *v4; // r4@2
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( (signed int)*(_BYTE *)(dword_3004824 + 66 + a1) > 0 )
  {
    v3 = (char *)&gTradeLevelDisplayCoords + 12 * a1;
    v4 = (char *)&gTradeMonBoxCoords + 12 * a1;
    do
    {
      sub_804A51C(v1, v2, *v3, v3[1], *v4, v4[1]);
      v3 += 2;
      v4 += 2;
      ++v2;
    }
    while ( v2 < *(_BYTE *)(dword_3004824 + 66 + v1) );
  }
  return v6;
}
