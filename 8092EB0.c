int __fastcall sub_8092EB0(unsigned __int8 a1)
{
  int v1; // r4@1
  __int16 v2; // r3@3
  unsigned int v3; // r0@5
  signed __int16 v4; // r3@7
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(v202FFB4 + 1556) && *(_WORD *)(v202FFB4 + 1556) == 1;
  LOWORD(dword_3004B20[10 * a1 + 3]) = v2;
  v3 = *(_WORD *)(v202FFB4 + 1560);
  if ( v3 > 5 )
  {
def_8092EFE:
    v4 = 0;
  }
  else
  {
    switch ( v3 )
    {
      default:
        goto def_8092EFE;
      case 1u:
        v4 = 1;
        break;
      case 2u:
        v4 = 2;
        break;
      case 3u:
        v4 = 3;
        break;
      case 4u:
        v4 = 4;
        break;
      case 5u:
        v4 = 5;
        break;
    }
  }
  LOWORD(dword_3004B20[10 * v1 + 4]) = v4;
  return v6;
}
