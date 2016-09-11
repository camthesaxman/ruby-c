int __fastcall sub_8053F84(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = (unsigned __int16)current_map_music_get(a1);
  if ( v1 != (unsigned __int16)sav1_map_get_music() )
  {
    v2 = sav1_map_get_music();
    sub_8074D60(v2, 8);
  }
  return v4;
}
