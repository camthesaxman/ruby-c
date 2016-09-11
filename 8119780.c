int __fastcall sub_8119780(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 52) )
  {
    v3 = *(_WORD *)(v1 + 32) - 2;
    *(_WORD *)(v1 + 32) = v3;
    if ( v3 < -16 )
    {
      if ( !(v2019003 & 0x40) )
        v2019003 |= 0x40u;
      DestroySprite(v1);
      v2019001 = 0;
      v2019034 = gUnknown_083FA61E;
    }
  }
  return v5;
}
