int __fastcall sub_80501FC(int a1)
{
  unsigned int v1; // r1@1
  int v2; // r0@3
  int v3; // r0@3
  _BYTE *v4; // r3@3
  int v5; // r0@3
  int v6; // r0@6
  int v8; // [sp+Ch] [bp-4h]@0

  sub_8051474(a1);
  v1 = *(_DWORD *)(dword_3004854 + 300);
  if ( v1 <= 0x57E03 )
    *(_DWORD *)(dword_3004854 + 300) = v1 + 1;
  sub_80500A8();
  SetLinkDebugValues(*(_WORD *)(dword_3004854 + 86), *(_WORD *)(dword_3004854 + 318));
  sub_804FE70();
  sub_805194C(*(_WORD *)(dword_3004854 + 318), 1000);
  v2 = sub_8051A3C(*(_WORD *)(dword_3004854 + 86));
  v3 = sub_8051B18(v2);
  sub_805123C(v3);
  v4 = (_BYTE *)(dword_3004854 + 111);
  v5 = *(_BYTE *)(dword_3004854 + 111);
  if ( !*(_BYTE *)(dword_3004854 + 111) )
  {
    v5 = 999;
    if ( (unsigned int)*(_WORD *)(dword_3004854 + 320) > 0x3E7 )
    {
      *(_WORD *)(dword_3004854 + 318) = 1000;
      *v4 = 1;
      v5 = SetMainCallback2((int)sub_8050954);
    }
  }
  RunTasks(v5);
  AnimateSprites();
  v6 = BuildOamBuffer();
  UpdatePaletteFade(v6);
  return v8;
}
