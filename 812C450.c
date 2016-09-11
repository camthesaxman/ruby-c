int __fastcall sub_812C450(int a1)
{
  int v1; // r2@1
  unsigned int v2; // r0@1
  signed __int16 v3; // r0@4
  __int16 v4; // r0@8
  __int16 v5; // r0@10
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52);
  if ( v2 <= 6 )
  {
    switch ( v2 )
    {
      case 0u:
      case 1u:
        *(_WORD *)(v1 + 36) = 1;
        *(_WORD *)(v1 + 38) = 0;
        goto _0812C4B0;
      case 2u:
      case 3u:
        *(_WORD *)(v1 + 36) = -1;
        v3 = 0;
        goto _0812C4AE;
      case 4u:
      case 5u:
        *(_WORD *)(v1 + 36) = 0;
        v3 = 1;
        goto _0812C4AE;
      default:
        break;
    }
  }
  *(_WORD *)(v1 + 36) = 0;
  v3 = -1;
_0812C4AE:
  *(_WORD *)(v1 + 38) = v3;
_0812C4B0:
  v4 = *(_WORD *)(v1 + 52) + 1;
  *(_WORD *)(v1 + 52) = v4;
  if ( v4 > 7 )
    *(_WORD *)(v1 + 52) = 0;
  v5 = *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 54) = v5 + 1;
  if ( v5 > 15 )
  {
    *(_WORD *)(v1 + 46) = 16;
    *(_WORD *)(v1 + 48) = 0;
    v4000050 = 16192;
    v4000052 = *(_WORD *)(v1 + 46);
    *(_DWORD *)(v1 + 28) = sub_812C4FC;
  }
  return v7;
}
