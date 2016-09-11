int __fastcall task_add_bump_boulder(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int *v4; // r1@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_8059E2C, 255)];
  *((_WORD *)v4 + 5) = v2;
  *((_WORD *)v4 + 6) = v3;
  call_via_r6();
  return v6;
}
