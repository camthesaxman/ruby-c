int __fastcall sub_813C1F4(unsigned __int8 a1)
{
  int *v1; // r4@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( (unsigned int)dword_3005ED0 > 0x814 )
  {
    v1 = &dword_3004B20[10 * a1];
    DestroyTask(*((_BYTE *)v1 + 8));
    *v1 = (int)task_intro_10;
  }
  return v3;
}
