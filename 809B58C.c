int __fastcall diegohint1(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r5@1
  unsigned __int8 v3; // r6@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( a1 == 14 )
    memcpy(33564184, &dword_3004360[25 * a2], 100);
  else
    sub_803B4B4(2400 * a1 + 80 * a2 + 33751204, 33564184);
  diegohint2(v2, v3);
  memcpy(33564084, 33564184, 100);
  sub_809C04C(33564084, 0);
  v20384E7 = v2;
  v20384E8 = v3;
  return v5;
}
