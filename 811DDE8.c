int sub_811DDE8()
{
  char *v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  if ( v0[63] & 0x10 && !*((_WORD *)v0 + 18) )
    dp01_tbl3_exec_completed(*((_WORD *)v0 + 18));
  return v2;
}
