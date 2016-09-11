int __fastcall sub_806A480(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  signed __int16 v3; // r0@4
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 3]);
  if ( v2 != *(_WORD *)(a1 + 48) )
  {
    *(_WORD *)(a1 + 48) = v2;
    if ( (unsigned int)(v2 - 1) <= 5 )
    {
      switch ( v2 )
      {
        case 0:
          *(_BYTE *)(a1 + 62) &= 0xFBu;
          *(_BYTE *)(a1 + 42) = 1;
          *(_BYTE *)(a1 + 44) &= 0xC0u;
          v3 = 53;
          goto _0806A55E;
        case 1:
          *(_BYTE *)(a1 + 62) &= 0xFBu;
          *(_BYTE *)(a1 + 42) = 1;
          *(_BYTE *)(a1 + 44) &= 0xC0u;
          v3 = 86;
          goto _0806A55E;
        case 2:
          *(_BYTE *)(a1 + 62) &= 0xFBu;
          *(_BYTE *)(a1 + 42) = 1;
          *(_BYTE *)(a1 + 44) &= 0xC0u;
          v3 = 107;
          goto _0806A55E;
        case 3:
          *(_BYTE *)(a1 + 62) &= 0xFBu;
          *(_BYTE *)(a1 + 42) = 1;
          *(_BYTE *)(a1 + 44) &= 0xC0u;
          v3 = 128;
_0806A55E:
          *(_WORD *)(v1 + 32) = v3;
          *(_WORD *)(v1 + 34) = 68;
          break;
        case 4:
          *(_BYTE *)(a1 + 62) &= 0xFBu;
          *(_BYTE *)(a1 + 42) = 2;
          *(_BYTE *)(a1 + 44) &= 0xC0u;
          *(_WORD *)(a1 + 32) = 155;
          *(_WORD *)(a1 + 34) = 80;
          break;
        case 5:
          DestroySprite(a1);
          break;
        default:
          return v5;
      }
    }
  }
  return v5;
}
