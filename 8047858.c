int __fastcall sub_8047858(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r1@1
  char *v3; // r3@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 17 * (unsigned __int8)object_new_hidden_with_callback((int)oamc_804BEB4);
  v3 = &gSprites[v2 * 4];
  *((_WORD *)v3 + 23) = 1;
  *((_WORD *)v3 + 24) = (unsigned __int8)byte_3004340[v1];
  dword_2020020[v2] = (int)oamc_804BEB4;
  return v5;
}
