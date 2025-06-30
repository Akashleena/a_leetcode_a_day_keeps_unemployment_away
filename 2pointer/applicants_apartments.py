def apartmentMatching(applicants : List[int], apartments : List[int], k : int)
{
    sort(applicants)
    sort(apartments)
    i = 0, j=0 # i: applicant pointer, j: apartment pointer
    count = 0
    while(i< length(applicants))
    {
        while (j < length(apartments) and apartments[j] < applicants[i] - k)
        {
            j+=1
        }
        
        #apartments fits applicants[i]
        if (j < length(aparments) and applicant[i] - k < = appartments[j] <= applicants[i] + k)
        {
            count += 1
            i += 1, j += 1
        }
        else{
            i+=1
        }
        
    }
    return count
}