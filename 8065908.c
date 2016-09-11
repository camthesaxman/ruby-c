int __fastcall s05_goto(int a1)
{
  int v1; // r4@1
  int v2; // r0@1

  v1 = a1;
  v2 = script_read_word(a1);
  script_jump(v1, v2);
  return 0;
}
