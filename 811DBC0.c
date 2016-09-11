int sub_811DBC0()
{
  signed int v0; // r6@1
  void (*v1)(); // r2@6
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  if ( !(battle_type_is_double() << 24) || battle_type_is_double() << 24 && v20239F8 & 0x40 )
  {
    if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] != SpriteCallbackDummy )
      goto _0811DC50;
    goto _0811DC4E;
  }
  v1 = (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]];
  if ( v1 == SpriteCallbackDummy && (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60 ^ 2]] == v1 )
_0811DC4E:
    v0 = 1;
_0811DC50:
  if ( sub_80753C4() << 24 )
    v0 = 0;
  if ( v0 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017819) = 3;
    dword_3004330[v2024A60] = (int)sub_811DB84;
  }
  return v3;
}
