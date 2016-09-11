int __fastcall sub_8104144(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  signed int v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 12) + 60] )
  {
    v2 = *(_WORD *)(a1 + 10);
    v3 = 0;
    if ( (signed __int16)v2 == 1 )
    {
      v3 = 1;
    }
    else if ( (signed __int16)v2 == 16 )
    {
      v3 = 2;
    }
    *(_WORD *)(((v2 + 2) << 16 >> 15) + 0x600E880) = *((_WORD *)&gUnknown_083ECBC4 + 2 * v3);
    sub_8105B88(*(_BYTE *)(v1 + 12));
    *(_WORD *)(v1 + 8) = 0;
    *(_WORD *)(v1 + 38) = 0;
  }
  return v5;
}
