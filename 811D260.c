signed int __fastcall sub_811D260(int a1)
{
  int v1; // r8@1
  int v2; // r4@1
  int v3; // ST00_4@1

  v1 = a1;
  v2 = 10 * *(_WORD *)(a1 + 10);
  v3 = *(_WORD *)((char *)&unk_83FD8FA + v2);
  sub_811D8FC(
    33603620,
    *(_WORD *)((char *)&gUnknown_083FD8F4 + v2),
    *(_WORD *)((char *)&unk_83FD8F6 + v2),
    *(_WORD *)((char *)&unk_83FD8F8 + v2));
  *(_WORD *)(v1 + 12) = word_83FD8FC[5 * *(_WORD *)(v1 + 10)];
  ++*(_WORD *)(v1 + 8);
  return 1;
}
