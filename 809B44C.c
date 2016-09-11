int __fastcall sub_809B44C(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( a1 == 14 )
    memcpy(33564084, &dword_3004360[25 * v20384E5], 100);
  else
    sub_803B4B4(2400 * a1 + 80 * a2 + 33751204, 33564084);
  sub_809B548(v2, v3);
  v20384E7 = v2;
  v20384E8 = v3;
  return v5;
}
