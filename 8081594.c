int __fastcall sub_8081594(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r5@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)sav1_get_flash_used_on_map();
  v3 = 0;
  if ( !v1 )
    v3 = 1;
  sub_8081534(120, 80, gUnknown_0839ACDC[v2], gUnknown_0839ACDC[v1], v3, 1u);
  sub_8081510();
  script_env_2_enable();
  return v5;
}
