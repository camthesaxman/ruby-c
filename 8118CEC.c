int __fastcall sub_8118CEC(int a1)
{
  int v1; // r4@1
  int (__fastcall *v2)(int); // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  if ( v2019003 & 0x1F && (v2019003 & 0x1F) == 1 )
  {
    sub_81193D4(v1);
    v2 = sub_8118CAC;
  }
  else
  {
    sub_8119224(v1);
    v2 = sub_81189A8;
  }
  *(_DWORD *)(v1 + 28) = v2;
  return v4;
}
