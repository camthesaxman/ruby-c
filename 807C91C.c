int __fastcall sub_807C91C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( v1 >> 24 != 3 && v2 != 5 && v2 != 13 )
    play_some_sound(v1);
  if ( v202FEB9 != v2 && v202FEB8 == v2 )
    call_via_r0(*(&gUnknown_08396FC8 + 4 * v2));
  v202FEBB = 0;
  v202FEB9 = v2;
  v202FEB6 = 0;
  return v4;
}
