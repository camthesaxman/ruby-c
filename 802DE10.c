int sub_802DE10()
{
  char *v0; // r0@1
  unsigned __int16 v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  if ( *((_WORD *)v0 + 17) + (signed int)*((_WORD *)v0 + 19) > 160 )
  {
    v1 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
    nullsub_9(v1);
    FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 3] << 26 >> 27);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    sub_8043DB0((unsigned __int8)byte_3004340[v2024A60]);
    dp01_tbl1_exec_completed();
  }
  return v3;
}
