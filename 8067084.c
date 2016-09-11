int __fastcall s9B_unknown(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  v2 = script_read_word(a1);
  if ( !v2 )
    v2 = *(_DWORD *)(v1 + 100);
  box_related_two__3(v2);
  return 0;
}
