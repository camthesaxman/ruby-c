int __fastcall sub_8109D04(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r6@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_8072DEC(v1);
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  SetBgTilemapBuffer(0);
  SetBgTilemapBuffer(1u);
  sub_80F9520(33786103);
  BuyMenuFreeMemory();
  if ( (unsigned __int8)sub_80FEFA4() == 1 )
  {
    v202E8D0 = *(_BYTE *)(v20388D0 + v20388F5);
    StringCopy(&gStringVar3, &asc_83EB6C5[32 * v202E8CC]);
    StringCopy(&gStringVar2, &asc_83EB6C5[32 * v202E8D0]);
  }
  else
  {
    v202E8D0 = -1;
  }
  DestroyTask(v2);
  script_env_2_enable_and_set_ctx_running();
  return v4;
}
