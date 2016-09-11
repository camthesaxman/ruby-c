int __fastcall sub_8106918(unsigned __int8 a1, char a2)
{
  unsigned int v2; // r3@1
  int v3; // r0@2
  _BYTE *v4; // r0@3
  _BYTE *v5; // r0@3
  _BYTE *v6; // r0@3
  _BYTE *v7; // r0@3
  char v8; // r1@3
  int v9; // r5@4
  _BYTE *v10; // r0@4
  _BYTE *v11; // r0@4
  int v13; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  if ( a2 != 1 )
  {
    v3 = *(_BYTE *)(dword_3005E8C + 10);
    if ( v2 > 7 )
    {
      v9 = 8 * v3;
      v10 = StringCopy(&unk_3005E40, (&gUnknown_083F60C0)[8 * v3]);
      v11 = (_BYTE *)StringCopy10((int)v10, dword_3005E8C + 11);
      StringCopy(v11, *(void **)((char *)&off_83F60C4 + v9));
      v8 = 3;
    }
    else
    {
      v4 = StringCopy(&unk_3005E40, gUnknown_083F60AC[v3]);
      v5 = StringCopy(v4, "╫ихн©мн");
      v6 = StringCopy(v5, (_BYTE *)(dword_3005E8C + 22));
      *v6 = -4;
      v6[1] = 22;
      v7 = StringCopy(v6 + 2, &gUnknown_0840FF75);
      StringCopy10((int)v7, dword_3005E8C + 11);
      v8 = 6;
    }
    sub_80729D8((int)&unk_3005E40, 8 * v8 + 1, 112, 1u);
  }
  return v13;
}
