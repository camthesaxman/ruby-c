int __fastcall sub_80B73CC(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r2@1
  char v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a1 << 24;
  a2 = (unsigned __int8)a2;
  v3 = v2 >> 24;
  if ( (v2 - 922746880) >> 24 <= 4 )
  {
    v4 = v3 - 49;
_080B745E:
    LOBYTE(v3) = v4;
    goto _080B7462;
  }
  if ( ((v3 - 60) & 0xFF) <= 4 )
  {
    v4 = v3 - 49;
    goto _080B745E;
  }
  if ( ((v3 - 65) & 0xFF) <= 4 )
  {
    v4 = v3 - 49;
    goto _080B745E;
  }
  if ( ((v3 - 70) & 0xFF) <= 4 )
    goto LABEL_20;
  if ( ((v3 + 121) & 0xFF) <= 4 )
  {
    v4 = v3 - 49;
    goto _080B745E;
  }
  if ( ((v3 + 116) & 0xFF) <= 4 )
  {
    v4 = v3 - 49;
    goto _080B745E;
  }
  if ( ((v3 + 111) & 0xFF) <= 4 )
  {
    v4 = v3 - 49;
    goto _080B745E;
  }
  if ( ((v3 + 106) & 0xFF) <= 4 )
  {
LABEL_20:
    v4 = v3 - 44;
    goto _080B745E;
  }
_080B7462:
  *(_BYTE *)(a2 + 33554449) = v3;
  return v6;
}
