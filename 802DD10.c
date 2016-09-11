int __fastcall sub_802DD10(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r2@1
  int v3; // r5@1
  int v4; // r4@2
  char *v5; // r7@2
  int v6; // r0@2
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 12);
  if ( !(*(_BYTE *)(12 * v3 + 0x2017810) & 0x40) )
  {
    v4 = *((_BYTE *)v2 + 8);
    v5 = (char *)&unk_3004360 + 100 * v4;
    v6 = GetMonData(v5, 56);
    if ( (unsigned __int8)battle_type_is_double(v6) != 1 || v4 != *(_WORD *)(2 * (v3 ^ 2) + 0x2024A6A) )
      sub_8045A5C((unsigned __int8)byte_3004340[v3], (char *)&unk_3004360 + 100 * v4, 0);
    else
      sub_8045A5C((unsigned __int8)byte_3004340[v3 ^ 2], v5, 0);
    dword_3004B20[10 * v1] = (int)sub_802DDC4;
  }
  return v8;
}
