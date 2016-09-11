signed int __fastcall GetGlyphWidth(int a1, int a2)
{
  int v2; // r3@1
  signed int v3; // r1@1
  unsigned int v4; // r0@3
  _BYTE *v5; // r0@5
  _BYTE *v6; // r2@6

  v2 = a2;
  v3 = 8;
  if ( *(_BYTE *)(a1 + 2) == 2 )
  {
    v3 = *(_BYTE *)(a1 + 14);
    if ( !*(_BYTE *)(a1 + 14) )
    {
      v4 = *(_BYTE *)(a1 + 1);
      if ( v4 > 6 )
      {
def_800490A:
        v3 = 8;
      }
      else
      {
        switch ( v4 )
        {
          case 3u:
            v5 = &sFont3Widths;
            goto LABEL_8;
          case 4u:
          case 5u:
            v6 = &sFont4Widths;
            goto LABEL_10;
          case 0u:
            v5 = &sFont0Widths;
LABEL_8:
            v3 = v5[v2];
            break;
          case 1u:
          case 2u:
            v6 = &sFont1Widths;
LABEL_10:
            v3 = v6[(unsigned __int8)sFontType1Map[2 * v2 + 1]];
            break;
          default:
            goto def_800490A;
        }
      }
    }
  }
  return v3;
}
