int sub_804E990()
{
  signed int v0; // r2@1
  int v2; // [sp+8h] [bp-4h]@0

  v4000000 = 0;
  dword_3004854 = 33652736;
  v2018000 = 0;
  v2018134 = 0;
  v0 = 0;
  do
    *(_WORD *)(dword_3004854 + 128 + 2 * v0++) = 0;
  while ( v0 <= 3 );
  sub_804E884(v202E8CC);
  if ( v202E8CC )
    SetMainCallback2((int)sub_804F378);
  else
    SetMainCallback2((int)sub_804E9F8);
  return v2;
}
