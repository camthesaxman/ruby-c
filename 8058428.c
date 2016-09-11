int __fastcall sub_8058428(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  int v8; // [sp+10h] [bp-4h]@0

  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( *(_WORD *)(a2 + 2) == 0xFFFF )
  {
    sub_805840C(a3, a4);
  }
  else
  {
    sub_8058378(*(_DWORD *)(a1 + 4) + *(_WORD *)(a2 + 2));
    sub_80583CC(v5, v6, *(_BYTE **)(v4 + 8));
  }
  return v8;
}
