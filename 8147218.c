int sub_8147218()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = ((unsigned int)dword_3001794 >> 3) & 7;
  *(_QWORD *)qword_30017AC = 1073741984LL;
  *(int *)((char *)qword_30017AC + 2) = (unsigned __int16)&word_30033AC[1578] | 0x70;
  LOBYTE(qword_30017AC[0]) = 72;
  if ( v203933E )
  {
    LOWORD(qword_30017AC[1]) = qword_30017AC[1] & 0xFC00 | gUnknown_08411948[3 * v0];
    BYTE3(qword_30017AC[0]) = BYTE3(qword_30017AC[0]) & 0xC1 | 2
                                                             * ((16 * gUnknown_08411948[3 * v0 + 2] | 8 * gUnknown_08411948[3 * v0 + 1]) & 0x1F);
  }
  else
  {
    LOWORD(qword_30017AC[1]) = qword_30017AC[1] & 0xFC00 | 1;
  }
  CpuFastSet(qword_30017AC, 117440512, 1);
  if ( v2039340 )
    --v2039340;
  return v2;
}
