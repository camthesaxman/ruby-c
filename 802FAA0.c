int sub_802FAA0()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
  {
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    sub_8043DB0((unsigned __int8)byte_3004340[v2024A60]);
    dp01_tbl1_exec_completed();
  }
  else
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
    dword_3004330[v2024A60] = (int)sub_802FB2C;
  }
  return v1;
}
