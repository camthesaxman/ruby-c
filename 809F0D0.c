int __fastcall sub_809F0D0(unsigned __int8 a1, char a2)
{
  int v2; // r7@1
  char v3; // r4@1
  int *v4; // r6@1
  int v6; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v201800B += a2;
  v4 = &dword_3004B20[10 * a1];
  dword_3005CF0 = *v4;
  sub_809FBE4();
  *((_WORD *)v4 + 4) = 0;
  if ( v3 == -1 )
  {
    *v4 = (int)sub_809EC38;
  }
  else
  {
    *v4 = (int)sub_809EE74;
    call_via_r1(v2, sub_809EE74);
  }
  return v6;
}
