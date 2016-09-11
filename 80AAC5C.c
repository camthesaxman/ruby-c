int __fastcall sub_80AAC5C(int a1, int a2)
{
  int v2; // r5@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = a1;
  if ( a2 << 24 <= 0 )
  {
    if ( v203869E )
      --v203869E;
  }
  else
  {
    ++v203869E;
  }
  if ( v203869E > 3u )
    v203869E = 3;
  sub_80AA5E8(v203869E);
  sub_80AE398(v203869C, v203869E);
  sub_80AA280(*(_BYTE *)(v2 + 50));
  sub_80AA658(*(_BYTE *)(v2 + 50));
  return v4;
}
