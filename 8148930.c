int __fastcall sub_8148930(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  calls_flash_erase_block();
  DestroyTask(v1);
  SetMainCallback2((int)sub_8148B34);
  return v3;
}
