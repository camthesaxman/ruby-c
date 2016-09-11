int sub_8138CB4()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
  {
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    sub_8043DB0(byte_3004340[v2024A60]);
    dp01_tbl5_exec_completed();
  }
  else
  {
    move_anim_start_t4(v2024A60, v2024A60, v2024A60, 1u);
    dword_3004330[v2024A60] = (int)sub_813789C;
  }
  return v1;
}
