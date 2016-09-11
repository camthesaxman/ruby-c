signed int __fastcall sub_8126380(int a1)
{
  int v1; // r7@1
  char v2; // r5@1
  char v3; // r6@1
  char v4; // r4@1
  char v5; // r0@1

  v1 = a1;
  *(_DWORD *)(a1 + 104) = script_read_word(a1);
  v2 = script_read_halfword(v1);
  v3 = script_read_word(v1);
  v4 = script_read_halfword(v1);
  v5 = script_read_word(v1);
  if ( sub_8126098(v2, v3, v4, v5) == 1 )
    *(_DWORD *)(v1 + 112) = 1;
  else
    sub_81260D0();
  return 1;
}
