int __fastcall sub_80B7370(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  char v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a1 << 24;
  a2 = (unsigned __int8)a2;
  v3 = v2 >> 24;
  if ( (v2 - 436207616) >> 24 <= 4 )
  {
    v4 = v3 + 49;
_080B73B8:
    LOBYTE(v3) = v4;
    goto _080B73BC;
  }
  if ( ((v3 - 70) & 0xFF) <= 4 )
    goto LABEL_12;
  if ( ((v3 - 106) & 0xFF) <= 4 )
  {
    v4 = v3 + 49;
    goto _080B73B8;
  }
  if ( ((v3 + 106) & 0xFF) <= 4 )
  {
LABEL_12:
    v4 = v3 + 5;
    goto _080B73B8;
  }
_080B73BC:
  *(_BYTE *)(a2 + 33554449) = v3;
  return v6;
}
