int bx_blink_t3()
{
  char *v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  if ( *((_WORD *)v0 + 24) == 32 )
  {
    *((_WORD *)v0 + 24) = 0;
    v0[62] &= 0xFBu;
    v2024E6D = 0;
    dp01_tbl3_exec_completed(33705581);
  }
  else
  {
    if ( !(*((_WORD *)v0 + 24) & 3) )
      v0[62] = v0[62] & 0xFB | 4 * (((unsigned int)(unsigned __int8)v0[62] << 29 >> 31) ^ 1);
    ++*((_WORD *)v0 + 24);
  }
  return v2;
}
