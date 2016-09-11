_BOOL4 __fastcall sub_8082B10(_WORD *a1, unsigned __int16 a2)
{
  _WORD *v2; // r4@1
  signed int v3; // r1@1

  v2 = a1;
  v3 = sub_8082894(a1, a2);
  return v3 != -1 && trainer_flag_check(v2[8 * v3 + 1]) << 24;
}
