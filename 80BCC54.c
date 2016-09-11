int __fastcall sub_80BCC54(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r0@1
  int v3; // r4@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = VarGet(16468);
  v3 = (unsigned __int16)v2;
  BuyMenuFreeMemory(v2);
  SetBgTilemapBuffer(0);
  SetBgTilemapBuffer(1);
  if ( v3 )
    script_env_1_execute_new_script((int)&gUnknown_0815F49A);
  else
    script_env_1_execute_new_script((int)&gUnknown_0815F399);
  DestroyTask(v1);
  return v5;
}
