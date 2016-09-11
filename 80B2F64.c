int __fastcall HandleShopMenuQuit(int a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8072DEC(a1);
  v2 = MenuZeroFillWindowRect(0, 0, 0xBu, 8u);
  sub_80BE3BC(v2);
  script_env_2_disable();
  DestroyTask(v1);
  if ( dword_3000708 )
    call_via_r0(dword_3000708);
  return v4;
}
