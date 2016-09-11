int __fastcall sub_8053FB0(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = v1 >> 16;
  v3 = (unsigned __int16)current_map_music_get(v1);
  if ( v3 != v2 && v3 != 444 )
    sub_8074D60(v2, 8);
  return v5;
}
