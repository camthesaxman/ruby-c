int sub_811E034()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] == SpriteCallbackDummy )
  {
    if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
      move_anim_start_t4(v2024A60, v2024A60, v2024A60, 6u);
    dword_3004330[v2024A60] = (int)sub_811E0A0;
  }
  return v1;
}
