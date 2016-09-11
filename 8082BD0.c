int __fastcall sub_8082BD0(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r5@1
  unsigned __int16 v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( sub_8082BA4() && sub_80828FC((int)&gTrainerEyeTrainers, v2, v3) == 1 )
    v20260AC = 0;
  return v5;
}
