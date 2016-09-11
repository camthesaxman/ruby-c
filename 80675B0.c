int __fastcall sBE_virtual_load_text(int a1)
{
  int v1; // r0@1

  v1 = script_read_word(a1);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)(v1 - v202E8B0));
  return 0;
}
